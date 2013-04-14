#ifndef TRADESHIPPINGADDRESSUPDATEREQUEST_H
#define TRADESHIPPINGADDRESSUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeShippingaddressUpdateResponse.h>

/**
 * TOP API: 只能更新一笔交易里面的买家收货地址  
只能更新发货前（即买家已付款，等待卖家发货状态）的交易的买家收货地址  
更新后的发货地址可以通过taobao.trade.fullinfo.get查到  
参数中所说的字节为GBK编码的（英文和数字占1字节，中文占2字节）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeShippingaddressUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getReceiverAddress() const
;  void setReceiverAddress (QString receiverAddress);

 QString getReceiverCity() const
;  void setReceiverCity (QString receiverCity);

 QString getReceiverDistrict() const
;  void setReceiverDistrict (QString receiverDistrict);

 QString getReceiverMobile() const
;  void setReceiverMobile (QString receiverMobile);

 QString getReceiverName() const
;  void setReceiverName (QString receiverName);

 QString getReceiverPhone() const
;  void setReceiverPhone (QString receiverPhone);

 QString getReceiverState() const
;  void setReceiverState (QString receiverState);

 QString getReceiverZip() const
;  void setReceiverZip (QString receiverZip);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeShippingaddressUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 收货地址。最大长度为228个字节。
 **/
  QString receiverAddress;

/**
 * @brief 城市。最大长度为32个字节。如：杭州
 **/
  QString receiverCity;

/**
 * @brief 区/县。最大长度为32个字节。如：西湖区
 **/
  QString receiverDistrict;

/**
 * @brief 移动电话。最大长度为30个字节。
 **/
  QString receiverMobile;

/**
 * @brief 收货人全名。最大长度为50个字节。
 **/
  QString receiverName;

/**
 * @brief 固定电话。最大长度为30个字节。
 **/
  QString receiverPhone;

/**
 * @brief 省份。最大长度为32个字节。如：浙江
 **/
  QString receiverState;

/**
 * @brief 邮政编码。必须由6个数字组成。
 **/
  QString receiverZip;

/**
 * @brief 交易编号。
 **/
  qlonglong tid;

};

#endif  /* TRADESHIPPINGADDRESSUPDATEREQUEST_H */
