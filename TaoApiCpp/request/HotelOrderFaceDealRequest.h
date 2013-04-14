#ifndef HOTELORDERFACEDEALREQUEST_H
#define HOTELORDERFACEDEALREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelOrderFaceDealResponse.h>

/**
 * TOP API: 该接口用于卖家确认到店支付订单或者取消订单。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderFaceDealRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOid() const
;  void setOid (qlonglong oid);

 QString getOperType() const
;  void setOperType (QString operType);

 QString getReasonText() const
;  void setReasonText (QString reasonText);

 QString getReasonType() const
;  void setReasonType (QString reasonType);


  virtual HotelOrderFaceDealResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 酒店订单oid
 **/
  qlonglong oid;

/**
 * @brief 操作类型，1：确认预订，2：取消订单
 **/
  QString operType;

/**
 * @brief 取消订单时的取消原因备注信息
 **/
  QString reasonText;

/**
 * @brief 取消订单时的取消原因，可选值：1,2,3,4； 
1：无房，2：价格变动，3：买家原因，4：其它原因
 **/
  QString reasonType;

};

#endif  /* HOTELORDERFACEDEALREQUEST_H */
