-- 2022년 4월 13일 취소되지 않은 흉부외과(CS) 진료 예약 내역을 조회
-- APPOINTMENT 테이블에 PT_NO(환자 번호), MDDR_ID(의사 번호)

SELECT a.APNT_NO, p.PT_NAME, a.PT_NO, a.MCDP_CD, d.DR_NAME, a.APNT_YMD

FROM APPOINTMENT as a
    JOIN PATIENT as p ON a.PT_NO = p.PT_NO
    JOIN DOCTOR  as d ON a.MDDR_ID = d.DR_ID
    
WHERE APNT_YMD LIKE '2022-04-13%'
    AND APNT_CNCL_YN = 'N'
    AND a.MCDP_CD = 'CS'

ORDER BY APNT_YMD