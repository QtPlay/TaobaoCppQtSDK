#ifndef HOTELORDERFACECHECKREQUEST_H
#define HOTELORDERFACECHECKREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelOrderFaceCheckResponse.h>

/**
 * TOP API: 此接口用户到店支付（前台面付）卖家处理订单的入住情况，包括核实买家已入住和核实买家未入住
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderFaceCheckRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 bool getChecked() const
;  void setChecked (bool checked);

 QDateTime getCheckinDate() const
;  void setCheckinDate (QDateTime checkinDate);

 QDateTime getCheckoutDate() const
;  void setCheckoutDate (QDateTime checkoutDate);

 qlonglong getOid() const
;  void setOid (qlonglong oid);


  virtual HotelOrderFaceCheckResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 核实已入住或者未入住，true：已入住，false：未入住
 **/
  bool checked;

/**
 * @brief 实际入住时间
 **/
  QDateTime checkinDate;

/**
 * @brief 实际离店时间
 **/
  QDateTime checkoutDate;

/**
 * @brief 酒店订单id
 **/
  qlonglong oid;

};

#endif  /* HOTELORDERFACECHECKREQUEST_H */
