#include <TaoApiCpp/domain/AlipayContract.h>
QString AlipayContract::getAlipayUserId() const {
  return alipayUserId;
}
void AlipayContract::setAlipayUserId (QString alipayUserId) {
  this->alipayUserId = alipayUserId;
}

QString AlipayContract::getContractContent() const {
  return contractContent;
}
void AlipayContract::setContractContent (QString contractContent) {
  this->contractContent = contractContent;
}

QDateTime AlipayContract::getEndTime() const {
  return endTime;
}
void AlipayContract::setEndTime (QDateTime endTime) {
  this->endTime = endTime;
}

QString AlipayContract::getPageUrl() const {
  return pageUrl;
}
void AlipayContract::setPageUrl (QString pageUrl) {
  this->pageUrl = pageUrl;
}

QDateTime AlipayContract::getStartTime() const {
  return startTime;
}
void AlipayContract::setStartTime (QDateTime startTime) {
  this->startTime = startTime;
}

bool AlipayContract::getSubscribe() const {
  return subscribe;
}
void AlipayContract::setSubscribe (bool subscribe) {
  this->subscribe = subscribe;
}


void AlipayContract::parseResponse() {
  if (responseParser->hasName("alipay_user_id")) {
  alipayUserId = responseParser->getStrByName("alipay_user_id");
  }
  if (responseParser->hasName("contract_content")) {
  contractContent = responseParser->getStrByName("contract_content");
  }
  if (responseParser->hasName("end_time")) {
  endTime = responseParser->getDateByName("end_time");
  }
  if (responseParser->hasName("page_url")) {
  pageUrl = responseParser->getStrByName("page_url");
  }
  if (responseParser->hasName("start_time")) {
  startTime = responseParser->getDateByName("start_time");
  }
  if (responseParser->hasName("subscribe")) {
  subscribe = responseParser->getBoolByName("subscribe");
  }

}

