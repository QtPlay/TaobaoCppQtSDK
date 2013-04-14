#include <TaoApiCpp/response/CaipiaoGoodsInfoInputResponse.h>

bool CaipiaoGoodsInfoInputResponse::getInputResult() const {
  return inputResult;
}
void CaipiaoGoodsInfoInputResponse::setInputResult (bool inputResult) {
  this->inputResult = inputResult;
}

void CaipiaoGoodsInfoInputResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("input_result")) {
  inputResult = responseParser->getBoolByName("input_result");
  }

}

