#include <TaoApiCpp/request/TaobaokeItemsDetailGetRequest.h>

QString TaobaokeItemsDetailGetRequest::getApiMethodName() const {
  return "taobao.taobaoke.items.detail.get";
}

QString TaobaokeItemsDetailGetRequest::getFields() const {
  return fields;
}
void TaobaokeItemsDetailGetRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TaobaokeItemsDetailGetRequest::getIsMobile() const {
  return isMobile;
}
void TaobaokeItemsDetailGetRequest::setIsMobile (bool isMobile) {
  this->isMobile = isMobile;
  appParams.insert("is_mobile", isMobile? "true": "false");
}

QString TaobaokeItemsDetailGetRequest::getNick() const {
  return nick;
}
void TaobaokeItemsDetailGetRequest::setNick (QString nick) {
  this->nick = nick;
  appParams.insert("nick", nick);
}

qlonglong TaobaokeItemsDetailGetRequest::getNumIids() const {
  return numIids;
}
void TaobaokeItemsDetailGetRequest::setNumIids (qlonglong numIids) {
  this->numIids = numIids;
  appParams.insert("num_iids", QString::number(numIids));
}

QString TaobaokeItemsDetailGetRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeItemsDetailGetRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

qlonglong TaobaokeItemsDetailGetRequest::getPid() const {
  return pid;
}
void TaobaokeItemsDetailGetRequest::setPid (qlonglong pid) {
  this->pid = pid;
  appParams.insert("pid", QString::number(pid));
}

qlonglong TaobaokeItemsDetailGetRequest::getReferType() const {
  return referType;
}
void TaobaokeItemsDetailGetRequest::setReferType (qlonglong referType) {
  this->referType = referType;
  appParams.insert("refer_type", QString::number(referType));
}

QString TaobaokeItemsDetailGetRequest::getTrackIids() const {
  return trackIids;
}
void TaobaokeItemsDetailGetRequest::setTrackIids (QString trackIids) {
  this->trackIids = trackIids;
  appParams.insert("track_iids", trackIids);
}



TaobaokeItemsDetailGetResponse *TaobaokeItemsDetailGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeItemsDetailGetResponse *tmpResponse = new TaobaokeItemsDetailGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
