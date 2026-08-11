# 실습 과제

## 1. 기본 협업 흐름

1. 기능 Issue를 작성합니다.
2. `feature/<issue>-<name>` Branch를 만듭니다.
3. 새로운 Device Class 또는 기능을 추가합니다.
4. Commit 후 Push하고 PR을 만듭니다.
5. 셀프 리뷰와 동료 리뷰를 진행합니다.
6. CI 통과 후 Merge합니다.

## 2. Conflict 실습

두 교육생이 서로 다른 Branch에서 `src/main.cpp`의 출력 줄을 수정합니다.
첫 번째 PR을 Merge한 뒤 두 번째 PR에서 발생한 Conflict를 해결합니다.

완료 조건:

- Conflict Marker가 없습니다.
- 두 변경의 의도가 최종 코드에 반영됩니다.
- Build와 Test가 통과합니다.

## 3. CI 실패 실습

작업 Branch에서 `tests/device_tests.cpp`의 기대값을 일부러 잘못 바꿉니다.
Actions Log에서 최초 오류를 찾고, Local에서 같은 Test를 재현한 뒤 수정합니다.

## 4. .gitignore 실습

`build/` 폴더 또는 IDE 개인 설정이 PR에 포함되는 상황을 재현합니다.
추적 여부를 확인하고 저장소에 필요한 파일만 남깁니다.

## 5. Revert 실습

교육용 PR을 Merge한 뒤 GitHub의 Revert 기능 또는 `git revert`로 취소 PR을 만듭니다.
과거 이력을 삭제하지 않고 취소 이력을 남기는 이유를 설명합니다.

## 6. Review 실습

PR에 아래 세 종류의 의견을 각각 하나씩 남깁니다.

- 질문
- 제안
- 수정 필수

사람이 아닌 변경 내용을 대상으로 구체적으로 작성합니다.
