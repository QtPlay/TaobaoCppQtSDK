#include <TaoApiCpp/request/HotelTypeAddRequest.h>

QString HotelTypeAddRequest::getApiMethodName() const {
  return "taobao.hotel.type.add";
}

qlonglong HotelTypeAddRequest::getHid() const {
  return hid;
}
void HotelTypeAddRequest::setHid (qlonglong hid) {
  this->hid = hid;
  appParams.insert("hid", QString::number(hid));
}

QString HotelTypeAddRequest::getName() const {
  return name;
}
void HotelTypeAddRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}

QString HotelTypeAddRequest::getSiteParam() const {
  return siteParam;
}
void HotelTypeAddRequest::setSiteParam (QString siteParam) {
  this->siteParam = siteParam;
  appParams.insert("site_param", siteParam);
}



HotelTypeAddResponse *HotelTypeAddRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelTypeAddResponse *tmpResponse = new HotelTypeAddResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
