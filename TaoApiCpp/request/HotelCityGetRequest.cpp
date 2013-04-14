#include <TaoApiCpp/request/HotelCityGetRequest.h>

QString HotelCityGetRequest::getApiMethodName() const {
  return "taobao.hotel.city.get";
}

QString HotelCityGetRequest::getCountry() const {
  return country;
}
void HotelCityGetRequest::setCountry (QString country) {
  this->country = country;
  appParams.insert("country", country);
}



HotelCityGetResponse *HotelCityGetRequest::getResponseClass(const QString &session,
                               const QString &accessToken)
{
  HotelCityGetResponse *tmpResponse = new HotelCityGetResponse;
  QString result = getWebReply(session, accessToken);
  tmpResponse->setParser(TaoParser(result, taoApiInfo->format));
  tmpResponse->parseResponse();
  return tmpResponse;
}
