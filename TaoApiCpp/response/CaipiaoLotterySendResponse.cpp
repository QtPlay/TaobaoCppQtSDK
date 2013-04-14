#include <TaoApiCpp/response/CaipiaoLotterySendResponse.h>

bool CaipiaoLotterySendResponse::getSendResult() const {
  return sendResult;
}
void CaipiaoLotterySendResponse::setSendResult (bool sendResult) {
  this->sendResult = sendResult;
}

void CaipiaoLotterySendResponse::parseNormalResponse() {
  parseError();
  if (responseParser->hasName("send_result")) {
  sendResult = responseParser->getBoolByName("send_result");
  }

}

