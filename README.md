# LIG 임베디드 스쿨 GitHub 협업 실습

C++ 예제를 이용해 **Issue → Branch → Commit → Pull Request → Review → CI → Merge**의 협업 흐름을 연습하는 저장소입니다.

## 학습 목표

- Issue에 작업 배경과 완료 조건을 작성합니다.
- Issue 기반 Branch에서 작업합니다.
- 의미 있는 단위로 Commit합니다.
- 설명과 Test 결과가 포함된 Pull Request를 작성합니다.
- Code Review 의견을 주고받습니다.
- Merge Conflict와 CI 실패를 해결합니다.
- 잘못 반영된 변경을 Revert로 안전하게 취소합니다.

## 빠른 시작

필요 도구:

- Git
- CMake 3.16 이상
- C++17 Compiler

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
./build/device_app
```

Windows의 다중 구성 Generator에서는 실행 파일 위치가 `build/Debug` 또는 `build/Release` 아래일 수 있습니다.

## 저장소 구조

```text
.
├─ include/device.h
├─ src/device.cpp
├─ src/main.cpp
├─ tests/device_tests.cpp
├─ docs/EXERCISES.md
├─ .github/
│  ├─ ISSUE_TEMPLATE/
│  ├─ workflows/ci.yml
│  ├─ CODEOWNERS
│  └─ pull_request_template.md
├─ CMakeLists.txt
└─ CONTRIBUTING.md
```

## 실습 순서

1. [실습 과제](docs/EXERCISES.md)를 읽습니다.
2. GitHub Issue Template으로 Issue를 만듭니다.
3. 최신 `main`에서 작업 Branch를 만듭니다.
4. 코드와 Test를 변경하고 Commit합니다.
5. Push 후 Pull Request를 만듭니다.
6. 셀프 리뷰와 동료 리뷰를 진행합니다.
7. GitHub Actions가 통과한 것을 확인하고 Merge합니다.

## 협업 규칙

자세한 규칙은 [CONTRIBUTING.md](CONTRIBUTING.md)를 참고하세요.

- `main`에 직접 Push하지 않습니다.
- 한 PR에는 하나의 목적만 담습니다.
- 변경 이유와 검증 결과를 기록합니다.
- 사람이 아니라 변경 내용을 Review합니다.
- 문제가 생기면 먼저 현재 Branch, `git status`, Push 여부를 확인합니다.

## 교육생 주의사항

- `reset --hard`와 강제 Push는 의미를 모른 채 실행하지 않습니다.
- 실제 비밀번호, Token, 인증서, API Key를 실습 저장소에 넣지 않습니다.
- Conflict Marker를 없앤 뒤 반드시 Build와 Test를 수행합니다.
