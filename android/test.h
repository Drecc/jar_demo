#ifndef TEST_TEST_TEST_TEST_H_
#define TEST_TEST_TEST_TEST_H_

#include <string>
#include "base/logging.h"

namespace demo {

class Test {
public:
    Test() = default;
    ~Test() {
        LOG(INFO) << "===== ~Test";
    }

    std::string GetMsg() {
        return m_msg;
    }

    void SetMsg(const std::string& msg) {
        m_msg = msg;
    }

private:
    std::string m_msg;

};



}   //namespace demo

#endif  // TEST_TEST_TEST_TEST_H_
