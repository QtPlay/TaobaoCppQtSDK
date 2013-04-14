#include <TaoApiCpp/request/SimbaCreativesRecordGetRequest.h>

QString SimbaCreativesRecordGetRequest::getApiMethodName() const {
  return "taobao.simba.creatives.record.get";
}

qlonglong SimbaCreativesRecordGetRequest::getCreativeIds() const {
  return creativeIds;
}
void SimbaCreativesRecordGetRequest::setCreativeIds (qlonglong creativeIds) {
  this->creativeIds = creativeIds;
  appParams.insert("creative_ids", QString::number(creativeIds));
}

QString SimbaCreativesRecordGetRequest::getNick() const {
  return nick;
}
void SimbaCreativesRecordGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}



SimbaCreativesRecordGetResponse *SimbaCreativesRecordGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  SimbaCreativesRecordGetResponse *tmpResponse = new SimbaCreativesRecordGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
