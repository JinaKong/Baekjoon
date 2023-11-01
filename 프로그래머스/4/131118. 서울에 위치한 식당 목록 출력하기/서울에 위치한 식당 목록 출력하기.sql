-- 코드를 입력하세요
SELECT 
    a.REST_ID, a.REST_NAME, a.FOOD_TYPE, a.FAVORITES, a.ADDRESS, 
    ROUND(AVG(b.REVIEW_SCORE), 2) AS SCORE
FROM 
    REST_INFO as a 
    JOIN REST_REVIEW as b ON A.REST_ID = B.REST_ID
#WHERE 
#    ADDRESS LIKE '서울특별시%'
GROUP BY 
    b.REST_ID
HAVING
    a.ADDRESS LIKE '서울%'
ORDER BY SCORE DESC, FAVORITES DESC;