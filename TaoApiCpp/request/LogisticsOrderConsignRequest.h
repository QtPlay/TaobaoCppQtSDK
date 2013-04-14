#ifndef LOGISTICSORDERCONSIGNREQUEST_H
#define LOGISTICSORDERCONSIGNREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsOrderConsignResponse.h>

/**
 * TOP API: 货运发货接口。通过该接口可以在通过淘宝对物流公司下单，并且可以享有部分折扣优惠。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrderConsignRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCargoDescription() const
;  void setCargoDescription (QString cargoDescription);

 QString getCargoName() const
;  void setCargoName (QString cargoName);

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);

 QString getPayType() const
;  void setPayType (QString payType);

 QString getReceiverAddress() const
;  void setReceiverAddress (QString receiverAddress);

 qlonglong getReceiverAreaId() const
;  void setReceiverAreaId (qlonglong receiverAreaId);

 QString getReceiverCityName() const
;  void setReceiverCityName (QString receiverCityName);

 QString getReceiverCorpName() const
;  void setReceiverCorpName (QString receiverCorpName);

 QString getReceiverCountyName() const
;  void setReceiverCountyName (QString receiverCountyName);

 QString getReceiverMobile() const
;  void setReceiverMobile (QString receiverMobile);

 QString getReceiverName() const
;  void setReceiverName (QString receiverName);

 QString getReceiverPhoneAreaCode() const
;  void setReceiverPhoneAreaCode (QString receiverPhoneAreaCode);

 QString getReceiverPhoneTel() const
;  void setReceiverPhoneTel (QString receiverPhoneTel);

 QString getReceiverPhoneTelExt() const
;  void setReceiverPhoneTelExt (QString receiverPhoneTelExt);

 QString getReceiverPostcode() const
;  void setReceiverPostcode (QString receiverPostcode);

 QString getReceiverProvinceName() const
;  void setReceiverProvinceName (QString receiverProvinceName);

 QString getReceiverWangwangNo() const
;  void setReceiverWangwangNo (QString receiverWangwangNo);

 QString getRefunderAddress() const
;  void setRefunderAddress (QString refunderAddress);

 qlonglong getRefunderAreaId() const
;  void setRefunderAreaId (qlonglong refunderAreaId);

 QString getRefunderCityName() const
;  void setRefunderCityName (QString refunderCityName);

 QString getRefunderCorpName() const
;  void setRefunderCorpName (QString refunderCorpName);

 QString getRefunderCountyName() const
;  void setRefunderCountyName (QString refunderCountyName);

 QString getRefunderMobile() const
;  void setRefunderMobile (QString refunderMobile);

 QString getRefunderName() const
;  void setRefunderName (QString refunderName);

 QString getRefunderPhoneAreaCode() const
;  void setRefunderPhoneAreaCode (QString refunderPhoneAreaCode);

 QString getRefunderPhoneTel() const
;  void setRefunderPhoneTel (QString refunderPhoneTel);

 QString getRefunderPhoneTelExt() const
;  void setRefunderPhoneTelExt (QString refunderPhoneTelExt);

 QString getRefunderPostcode() const
;  void setRefunderPostcode (QString refunderPostcode);

 QString getRefunderProvinceName() const
;  void setRefunderProvinceName (QString refunderProvinceName);

 QString getRefunderWangwangNo() const
;  void setRefunderWangwangNo (QString refunderWangwangNo);

 QString getRemark() const
;  void setRemark (QString remark);

 QString getRouteCode() const
;  void setRouteCode (QString routeCode);

 QString getSenderAddress() const
;  void setSenderAddress (QString senderAddress);

 qlonglong getSenderAreaId() const
;  void setSenderAreaId (qlonglong senderAreaId);

 QString getSenderCityName() const
;  void setSenderCityName (QString senderCityName);

 QString getSenderCorpName() const
;  void setSenderCorpName (QString senderCorpName);

 QString getSenderCountyName() const
;  void setSenderCountyName (QString senderCountyName);

 QString getSenderMobile() const
;  void setSenderMobile (QString senderMobile);

 QString getSenderName() const
;  void setSenderName (QString senderName);

 QString getSenderPhoneAreaCode() const
;  void setSenderPhoneAreaCode (QString senderPhoneAreaCode);

 QString getSenderPhoneTel() const
;  void setSenderPhoneTel (QString senderPhoneTel);

 QString getSenderPhoneTelExt() const
;  void setSenderPhoneTelExt (QString senderPhoneTelExt);

 QString getSenderPostcode() const
;  void setSenderPostcode (QString senderPostcode);

 QString getSenderProvinceName() const
;  void setSenderProvinceName (QString senderProvinceName);

 QString getSenderWangwangNo() const
;  void setSenderWangwangNo (QString senderWangwangNo);

 QString getSource() const
;  void setSource (QString source);

 qlonglong getTotalNumber() const
;  void setTotalNumber (qlonglong totalNumber);

 QString getTotalVolume() const
;  void setTotalVolume (QString totalVolume);

 QString getTotalWeight() const
;  void setTotalWeight (QString totalWeight);

 QString getVasList() const
;  void setVasList (QString vasList);


  virtual LogisticsOrderConsignResponse *getResponseClass(const QString &session = "",
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
 * @brief 物流订单id
 **/
  qlonglong orderId;

/**
 * @brief 付款方式。0：发货人支付；1：收货人支付；2：双方支付
 **/
  QString payType;

/**
 * @brief 收件人地址
 **/
  QString receiverAddress;

/**
 * @brief 收件人地区编码
 **/
  qlonglong receiverAreaId;

/**
 * @brief 收件人城市名
 **/
  QString receiverCityName;

/**
 * @brief 收件人公司名称
 **/
  QString receiverCorpName;

/**
 * @brief 收件人区名
 **/
  QString receiverCountyName;

/**
 * @brief 收件人手机号
 **/
  QString receiverMobile;

/**
 * @brief 收件人名
 **/
  QString receiverName;

/**
 * @brief 收件人电话区号
 **/
  QString receiverPhoneAreaCode;

/**
 * @brief 收件人电话号码
 **/
  QString receiverPhoneTel;

/**
 * @brief 收件人电话分机号
 **/
  QString receiverPhoneTelExt;

/**
 * @brief 收件人邮编
 **/
  QString receiverPostcode;

/**
 * @brief 收件人省名
 **/
  QString receiverProvinceName;

/**
 * @brief 收件人旺旺号
 **/
  QString receiverWangwangNo;

/**
 * @brief 退货接收人地址
 **/
  QString refunderAddress;

/**
 * @brief 退货接收人地区id
 **/
  qlonglong refunderAreaId;

/**
 * @brief 退货接收人城市名
 **/
  QString refunderCityName;

/**
 * @brief 退货接收人公司名称
 **/
  QString refunderCorpName;

/**
 * @brief 退货接收人区名
 **/
  QString refunderCountyName;

/**
 * @brief 退货接收人手机号码
 **/
  QString refunderMobile;

/**
 * @brief 退货接收人姓名
 **/
  QString refunderName;

/**
 * @brief 退货接收人电话区号
 **/
  QString refunderPhoneAreaCode;

/**
 * @brief 退货接收人电话号码
 **/
  QString refunderPhoneTel;

/**
 * @brief 退货接收人电话分机号
 **/
  QString refunderPhoneTelExt;

/**
 * @brief 退货接收人邮编
 **/
  QString refunderPostcode;

/**
 * @brief 退货接收人省名
 **/
  QString refunderProvinceName;

/**
 * @brief 退货接收人旺旺id
 **/
  QString refunderWangwangNo;

/**
 * @brief 发货备注
 **/
  QString remark;

/**
 * @brief 线路code，线路的业务标识。
 **/
  QString routeCode;

/**
 * @brief 发货人地址
 **/
  QString senderAddress;

/**
 * @brief 发货地区编码
 **/
  qlonglong senderAreaId;

/**
 * @brief 发货人城市名
 **/
  QString senderCityName;

/**
 * @brief 发货人公司名称
 **/
  QString senderCorpName;

/**
 * @brief 发货人区名
 **/
  QString senderCountyName;

/**
 * @brief 发货人手机号
 **/
  QString senderMobile;

/**
 * @brief 发货人姓名
 **/
  QString senderName;

/**
 * @brief 发货人电话区号
 **/
  QString senderPhoneAreaCode;

/**
 * @brief 发货人电话
 **/
  QString senderPhoneTel;

/**
 * @brief 发货人电话分机号
 **/
  QString senderPhoneTelExt;

/**
 * @brief 发货人地区邮编
 **/
  QString senderPostcode;

/**
 * @brief 发货人省名
 **/
  QString senderProvinceName;

/**
 * @brief 发货人旺旺号
 **/
  QString senderWangwangNo;

/**
 * @brief top开放的来源。默认都使用：TAOBAO_TOP。
 **/
  QString source;

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

#endif  /* LOGISTICSORDERCONSIGNREQUEST_H */
