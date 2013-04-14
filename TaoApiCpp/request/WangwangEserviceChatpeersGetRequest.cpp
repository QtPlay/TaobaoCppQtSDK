#include <TaoApiCpp/request/WangwangEserviceChatpeersGetRequest.h>

QString WangwangEserviceChatpeersGetRequest::getApiMethodName() const {
  return "taobao.wangwang.eservice.chatpeers.get";
}

QString WangwangEserviceChatpeersGetRequest::getCharset() const {
  return charset;
}
void WangwangEserviceChatpeersGetRequest::setCharset (QString charset) {
  this->charset = charset;
  appParams.insert("charset", charset);
}

QString WangwangEserviceChatpeersGetRequest::getChatId() const {
  return chatId;
}
void WangwangEserviceChatpeersGetRequest::setChatId (QString chatId) {
  this->chatId = chatId;
  appParams.insert("chat_id", chatId);
}

QString WangwangEserviceChatpeersGetRequest::getEndDate() const {
  return endDate;
}
void WangwangEserviceChatpeersGetRequest::setEndDate (QString endDate) {
  this->endDate = endDate;
  appParams.insert("end_date", endDate);
}

QString WangwangEserviceChatpeersGetRequest::getStartDate() const {
  return startDate;
}
void WangwangEserviceChatpeersGetRequest::setStartDate (QString startDate) {
  this->startDate = startDate;
  appParams.insert("start_date", startDate);
}



WangwangEserviceChatpeersGetResponse *WangwangEserviceChatpeersGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WangwangEserviceChatpeersGetResponse *tmpResponse = new WangwangEserviceChatpeersGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
