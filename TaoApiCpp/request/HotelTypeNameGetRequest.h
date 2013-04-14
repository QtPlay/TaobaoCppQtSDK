#ifndef HOTELTYPENAMEGETREQUEST_H
#define HOTELTYPENAMEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelTypeNameGetResponse.h>

/**
 * TOP API: 此接口用于查询一个房型，根据传入的酒店hid，房型名称/别名查询房型信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelTypeNameGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getHid() const
;  void setHid (qlonglong hid);

 QString getName() const
;  void setName (QString name);


  virtual HotelTypeNameGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 要查询的酒店id。必须为数字
 **/
  qlonglong hid;

/**
 * @brief 房型全部名称/别名。不能超过60字节
 **/
  QString name;

};

#endif  /* HOTELTYPENAMEGETREQUEST_H */
