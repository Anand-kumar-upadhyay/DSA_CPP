SELECT 
    ROUND(
        COUNT(DISTINCT a.p) / 
        (SELECT COUNT(DISTINCT player_id) FROM Activity),
        2
    ) AS fraction
FROM (
    SELECT player_id AS p, event_date AS d
    FROM Activity
) a
WHERE (a.p, a.d) IN (
    SELECT player_id, DATE_ADD(MIN(event_date), INTERVAL 1 DAY)
    FROM Activity
    GROUP BY player_id
);