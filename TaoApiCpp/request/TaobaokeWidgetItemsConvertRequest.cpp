#include <TaoApiCpp/request/TaobaokeWidgetItemsConvertRequest.h>

QString TaobaokeWidgetItemsConvertRequest::getApiMethodName() const {
  return "taobao.taobaoke.widget.items.convert";
}

QString TaobaokeWidgetItemsConvertRequest::getFields() const {
  return fields;
}
void TaobaokeWidgetItemsConvertRequest::setFields (QString fields) {
  this->fields = fields;
  appParams.insert("fields", fields);
}

bool TaobaokeWidgetItemsConvertRequest::getIsMobile() const {
  return isMobile;
}
void TaobaokeWidgetItemsConvertRequest::setIsMobile (bool isMobile) {
  this->isMobile = isMobile;
  appParams.insert("is_mobile", isMobile? "true": "false");
}

qlonglong TaobaokeWidgetItemsConvertRequest::getNumIids() const {
  return numIids;
}
void TaobaokeWidgetItemsConvertRequest::setNumIids (qlonglong numIids) {
  this->numIids = numIids;
  appParams.insert("num_iids", QString::number(numIids));
}

QString TaobaokeWidgetItemsConvertRequest::getOuterCode() const {
  return outerCode;
}
void TaobaokeWidgetItemsConvertRequest::setOuterCode (QString outerCode) {
  this->outerCode = outerCode;
  appParams.insert("outer_code", outerCode);
}

QString TaobaokeWidgetItemsConvertRequest::getTrackIids() const {
  return trackIids;
}
void TaobaokeWidgetItemsConvertRequest::setTrackIids (QString trackIids) {
  this->trackIids = trackIids;
  appParams.insert("track_iids", trackIids);
}



TaobaokeWidgetItemsConvertResponse *TaobaokeWidgetItemsConvertRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  TaobaokeWidgetItemsConvertResponse *tmpResponse = new TaobaokeWidgetItemsConvertResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
