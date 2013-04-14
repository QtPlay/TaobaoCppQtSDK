#include <TaoApiCpp/request/LogisticsAddressRemoveRequest.h>

QString LogisticsAddressRemoveRequest::getApiMethodName() const {
  return "taobao.logistics.address.remove";
}

qlonglong LogisticsAddressRemoveRequest::getContactId() const {
  return contactId;
}
void LogisticsAddressRemoveRequest::setContactId (qlonglong contactId) {
  this->contactId = contactId;
  appParams.insert("contact_id", QString::number(contactId));
}



LogisticsAddressRemoveResponse *LogisticsAddressRemoveRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  LogisticsAddressRemoveResponse *tmpResponse = new LogisticsAddressRemoveResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
