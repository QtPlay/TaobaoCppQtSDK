#include <TaoApiCpp/response/CaipiaoShopInfoInputResponse.h>

bool CaipiaoShopInfoInputResponse::getInputResult() const {
  return inputResult;
}
void CaipiaoShopInfoInputResponse::setInputResult (bool inputResult) {
  this->inputResult = inputResult;
}

void CaipiaoShopInfoInputResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("input_result")) {
  inputResult = responseParser->getBoolByName("input_result");
  }

}

