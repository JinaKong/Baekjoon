-- 코드를 입력하세요
SELECT a.NAME, a.DATETIME

FROM ANIMAL_INS as a
    LEFT JOIN ANIMAL_OUTS as b ON a.ANIMAL_ID = b.ANIMAL_ID

WHERE b.DATETIME IS NULL

ORDER BY a.DATETIME ASC
LIMIT 3;