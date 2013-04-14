#include <TaoApiCpp/request/HotelTypeNameGetRequest.h>

QString HotelTypeNameGetRequest::getApiMethodName() const {
  return "taobao.hotel.type.name.get";
}

qlonglong HotelTypeNameGetRequest::getHid() const {
  return hid;
}
void HotelTypeNameGetRequest::setHid (qlonglong hid) {
  this->hid = hid;
  appParams.insert("hid", QString::number(hid));
}

QString HotelTypeNameGetRequest::getName() const {
  return name;
}
void HotelTypeNameGetRequest::setName (QString name) {
  this->name = name;
  appParams.insert("name", name);
}



HotelTypeNameGetResponse *HotelTypeNameGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelTypeNameGetResponse *tmpResponse = new HotelTypeNameGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
