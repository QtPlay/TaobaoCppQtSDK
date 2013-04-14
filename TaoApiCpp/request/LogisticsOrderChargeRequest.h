#ifndef LOGISTICSORDERCHARGEREQUEST_H
#define LOGISTICSORDERCHARGEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsOrderChargeResponse.h>

/**
 * TOP API: 订单价格计算
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrderChargeRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCargoDescription() const
;  void setCargoDescription (QString cargoDescription);

 QString getCargoName() const
;  void setCargoName (QString cargoName);

 QString getPayType() const
;  void setPayType (QString payType);

 QString getRouteCode() const
;  void setRouteCode (QString routeCode);

 qlonglong getTotalNumber() const
;  void setTotalNumber (qlonglong totalNumber);

 QString getTotalVolume() const
;  void setTotalVolume (QString totalVolume);

 QString getTotalWeight() const
;  void setTotalWeight (QString totalWeight);

 QString getVasList() const
;  void setVasList (QString vasList);


  virtual LogisticsOrderChargeResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 货物描述
 **/
  QString cargoDescription;

/**
 * @brief 货物名称
 **/
  QString cargoName;

/**
 * @brief 付款方式。0：发货人支付；1：收货人支付；2：双方支付
 **/
  QString payType;

/**
 * @brief 线路标志
 **/
  QString routeCode;

/**
 * @brief 货物件数
 **/
  qlonglong totalNumber;

/**
 * @brief 货物体积
 **/
  QString totalVolume;

/**
 * @brief 货物重量
 **/
  QString totalWeight;

/**
 * @brief 下单选中的增值服务
 **/
  QString vasList;

};

#endif  /* LOGISTICSORDERCHARGEREQUEST_H */
