--  나이 정보가 없는 회원이 몇 명인지 출력
SELECT COUNT(*) as USERES
FROM USER_INFO 
WHERE AGE IS NULL