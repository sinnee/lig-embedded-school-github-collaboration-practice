# 협업 규칙

## 기본 흐름

1. 작업 전 Issue를 만들고 완료 조건을 적습니다.
2. 최신 `main`에서 Issue 번호가 포함된 Branch를 만듭니다.
3. 의미 있는 단위로 Commit합니다.
4. Pull Request Template을 작성하고 셀프 리뷰합니다.
5. CI 통과와 Review 승인을 확인한 뒤 Merge합니다.

## Branch 이름

- `feature/<issue>-<summary>`
- `fix/<issue>-<summary>`
- `docs/<issue>-<summary>`

예: `fix/17-uart-buffer-overflow`

## Commit

- 한 Commit에는 하나의 목적을 담습니다.
- 기능 변경과 단순 Format 변경을 섞지 않습니다.
- 예: `fix: reject oversized UART packet`

## Review

의견의 강도를 표시합니다.

- 질문: 배경이나 의도 확인
- 제안: 선택적으로 개선할 사항
- 수정 필수: Merge 전에 해결해야 하는 결함

사람이 아닌 변경 내용을 검토하고, 결정과 이유는 PR에 기록합니다.
