#include <TaoApiCpp/request/ScitemMapDeleteRequest.h>

QString ScitemMapDeleteRequest::getApiMethodName() const {
  return "taobao.scitem.map.delete";
}

qlonglong ScitemMapDeleteRequest::getScItemId() const {
  return scItemId;
}
void ScitemMapDeleteRequest::setScItemId (qlonglong scItemId) {
  this->scItemId = scItemId;
  appParams.insert("sc_item_id", QString::number(scItemId));
}

QString ScitemMapDeleteRequest::getUserNick() const {
  return userNick;
}
void ScitemMapDeleteRequest::setUserNick (QString userNick) {
  this->userNick = userNick;
  appParams.insert("user_nick", userNick);
}



ScitemMapDeleteResponse *ScitemMapDeleteRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  ScitemMapDeleteResponse *tmpResponse = new ScitemMapDeleteResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
