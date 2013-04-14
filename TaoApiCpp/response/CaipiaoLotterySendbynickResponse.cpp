#include <TaoApiCpp/response/CaipiaoLotterySendbynickResponse.h>

bool CaipiaoLotterySendbynickResponse::getSendResult() const {
  return sendResult;
}
void CaipiaoLotterySendbynickResponse::setSendResult (bool sendResult) {
  this->sendResult = sendResult;
}

void CaipiaoLotterySendbynickResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("send_result")) {
  sendResult = responseParser->getBoolByName("send_result");
  }

}

