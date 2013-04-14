#include <TaoApiCpp/request/WlbNotifyMessageConfirmRequest.h>

QString WlbNotifyMessageConfirmRequest::getApiMethodName() const {
  return "taobao.wlb.notify.message.confirm";
}

qlonglong WlbNotifyMessageConfirmRequest::getMessageId() const {
  return messageId;
}
void WlbNotifyMessageConfirmRequest::setMessageId (qlonglong messageId) {
  this->messageId = messageId;
  appParams.insert("message_id", QString::number(messageId));
}



WlbNotifyMessageConfirmResponse *WlbNotifyMessageConfirmRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  WlbNotifyMessageConfirmResponse *tmpResponse = new WlbNotifyMessageConfirmResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
