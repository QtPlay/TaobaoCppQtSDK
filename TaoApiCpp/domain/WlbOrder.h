#ifndef WLBORDER_H
#define WLBORDER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 物流宝订单对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrder : public TaoDomain
{

public:
 virtual ~WlbOrder() { }

  QString getBuyerNick() const;
  void setBuyerNick (QString buyerNick);
  qlonglong getCancelOrderStatus() const;
  void setCancelOrderStatus (qlonglong cancelOrderStatus);
  QString getConfirmStatus() const;
  void setConfirmStatus (QString confirmStatus);
  QDateTime getExpectEndTime() const;
  void setExpectEndTime (QDateTime expectEndTime);
  QDateTime getExpectStartTime() const;
  void setExpectStartTime (QDateTime expectStartTime);
  QString getInvoiceInfo() const;
  void setInvoiceInfo (QString invoiceInfo);
  qlonglong getItemKindsCount() const;
  void setItemKindsCount (qlonglong itemKindsCount);
  QString getOperateType() const;
  void setOperateType (QString operateType);
  QString getOrderCode() const;
  void setOrderCode (QString orderCode);
  qlonglong getOrderFlag() const;
  void setOrderFlag (qlonglong orderFlag);
  QString getOrderSource() const;
  void setOrderSource (QString orderSource);
  QString getOrderSourceCode() const;
  void setOrderSourceCode (QString orderSourceCode);
  QString getOrderStatus() const;
  void setOrderStatus (QString orderStatus);
  QString getOrderStatusReason() const;
  void setOrderStatusReason (QString orderStatusReason);
  QString getOrderSubType() const;
  void setOrderSubType (QString orderSubType);
  QString getOrderType() const;
  void setOrderType (QString orderType);
  QString getPrevOrderCode() const;
  void setPrevOrderCode (QString prevOrderCode);
  qlonglong getRealKindsCount() const;
  void setRealKindsCount (qlonglong realKindsCount);
  qlonglong getReceivableAmount() const;
  void setReceivableAmount (qlonglong receivableAmount);
  QString getReceiverAddress() const;
  void setReceiverAddress (QString receiverAddress);
  QString getReceiverArea() const;
  void setReceiverArea (QString receiverArea);
  QString getReceiverCity() const;
  void setReceiverCity (QString receiverCity);
  QString getReceiverMail() const;
  void setReceiverMail (QString receiverMail);
  QString getReceiverMobile() const;
  void setReceiverMobile (QString receiverMobile);
  QString getReceiverName() const;
  void setReceiverName (QString receiverName);
  QString getReceiverPhone() const;
  void setReceiverPhone (QString receiverPhone);
  QString getReceiverProvince() const;
  void setReceiverProvince (QString receiverProvince);
  QString getReceiverWangwang() const;
  void setReceiverWangwang (QString receiverWangwang);
  QString getReceiverZipCode() const;
  void setReceiverZipCode (QString receiverZipCode);
  QString getRemark() const;
  void setRemark (QString remark);
  QString getScheduleDay() const;
  void setScheduleDay (QString scheduleDay);
  QString getScheduleEnd() const;
  void setScheduleEnd (QString scheduleEnd);
  qlonglong getScheduleSpeed() const;
  void setScheduleSpeed (qlonglong scheduleSpeed);
  QString getScheduleStart() const;
  void setScheduleStart (QString scheduleStart);
  QString getSenderAddress() const;
  void setSenderAddress (QString senderAddress);
  QString getSenderArea() const;
  void setSenderArea (QString senderArea);
  QString getSenderCity() const;
  void setSenderCity (QString senderCity);
  QString getSenderEmail() const;
  void setSenderEmail (QString senderEmail);
  QString getSenderMobile() const;
  void setSenderMobile (QString senderMobile);
  QString getSenderName() const;
  void setSenderName (QString senderName);
  QString getSenderPhone() const;
  void setSenderPhone (QString senderPhone);
  QString getSenderProvince() const;
  void setSenderProvince (QString senderProvince);
  QString getSenderZipCode() const;
  void setSenderZipCode (QString senderZipCode);
  qlonglong getServiceFee() const;
  void setServiceFee (qlonglong serviceFee);
  QString getShippingType() const;
  void setShippingType (QString shippingType);
  QString getStoreCode() const;
  void setStoreCode (QString storeCode);
  QString getTmsTpCode() const;
  void setTmsTpCode (QString tmsTpCode);
  qlonglong getTotalAmount() const;
  void setTotalAmount (qlonglong totalAmount);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getUserNick() const;
  void setUserNick (QString userNick);
  
  virtual void parseResponse();

private:
/**
 * @brief 买家nick
 **/
  QString buyerNick;

/**
 * @brief 订单取消状态： 
1-取消中；  
2-取消失败； 
3-取消完成
 **/
  qlonglong cancelOrderStatus;

/**
 * @brief 确认状态： 
(1)不需要确认：NO_NEED_CONFIRM 
(2)等待确认：WAIT_CONFIRM 
(3)已确认:CONFIRMED
 **/
  QString confirmStatus;

/**
 * @brief 计划送达结束时间
 **/
  QDateTime expectEndTime;

/**
 * @brief 计划送达开始时间
 **/
  QDateTime expectStartTime;

/**
 * @brief 发票信息
 **/
  QString invoiceInfo;

/**
 * @brief 物流宝订单中的商品种类数量
 **/
  qlonglong itemKindsCount;

/**
 * @brief 出库或者入库，IN表示入库，OUT表示出库
 **/
  QString operateType;

/**
 * @brief 订单编码
 **/
  QString orderCode;

/**
 * @brief 第1位:COD,2:限时配送,3:预售,4:需要发票,5:已投诉,第6位:合单,第7位:拆单 第8位：EXCHANGE-换货， 第9位:VISIT-上门 ， 第10位: MODIFYTRANSPORT-是否可改配送方式，第11位：是否物流代理确认发货
 **/
  qlonglong orderFlag;

/**
 * @brief 订单来源: 
产生物流订单的原因，比如: 
 
订单来源:1:TAOBAO;2:EXT;3:ERP;4:WMS
 **/
  QString orderSource;

/**
 * @brief 对应创建物流宝订单top接口中的的out_biz_code字段，主要是用来去重用
 **/
  QString orderSourceCode;

/**
 * @brief 物流状态， 
订单已创建：0 
订单已取消: -1 
订单关闭:-3 
下发中: 10 
已下发: 11 
接收方拒签 :-100 
已发货:100 
签收成功:200
 **/
  QString orderStatus;

/**
 * @brief 卖家取消,仓库取消标识
 **/
  QString orderStatusReason;

/**
 * @brief (1)其它:    OTHER 
(2)淘宝交易: TAOBAO 
(3)301:调拨: ALLOCATION 
(4)401:盘点:CHECK 
(5)501:销售采购:PRUCHASE
 **/
  QString orderSubType;

/**
 * @brief 1:正常订单: NARMAL 
2:退货订单: RETURN 
3:换货订单: CHANGE
 **/
  QString orderType;

/**
 * @brief 原订单编码
 **/
  QString prevOrderCode;

/**
 * @brief 实际入库的种类数量
 **/
  qlonglong realKindsCount;

/**
 * @brief 应收金额
 **/
  qlonglong receivableAmount;

/**
 * @brief 收件人具体地址
 **/
  QString receiverAddress;

/**
 * @brief 区或者县
 **/
  QString receiverArea;

/**
 * @brief 收件人城市
 **/
  QString receiverCity;

/**
 * @brief 接收人电子邮箱
 **/
  QString receiverMail;

/**
 * @brief 接收人手机号码
 **/
  QString receiverMobile;

/**
 * @brief 接收人姓名
 **/
  QString receiverName;

/**
 * @brief 接收人固定电话
 **/
  QString receiverPhone;

/**
 * @brief 收件人省份
 **/
  QString receiverProvince;

/**
 * @brief 接收人旺旺
 **/
  QString receiverWangwang;

/**
 * @brief 收件人邮编
 **/
  QString receiverZipCode;

/**
 * @brief 订单备注
 **/
  QString remark;

/**
 * @brief 发货日期: 
(1)1 为工作日 
(2)2 为节假日
 **/
  QString scheduleDay;

/**
 * @brief 配送结束时间通常是HH:MM格式
 **/
  QString scheduleEnd;

/**
 * @brief 发货速度  ， 
101-当日达， 
102-次晨达， 
103-次日达
 **/
  qlonglong scheduleSpeed;

/**
 * @brief 配送开始时间通常是HH:MM格式
 **/
  QString scheduleStart;

/**
 * @brief 发件人地址
 **/
  QString senderAddress;

/**
 * @brief 发件人所在区
 **/
  QString senderArea;

/**
 * @brief 发件人城市
 **/
  QString senderCity;

/**
 * @brief 发件人电子邮箱
 **/
  QString senderEmail;

/**
 * @brief 发件人移动电话
 **/
  QString senderMobile;

/**
 * @brief 发件人姓名
 **/
  QString senderName;

/**
 * @brief 发件人联系电话
 **/
  QString senderPhone;

/**
 * @brief 发件人所在省份
 **/
  QString senderProvince;

/**
 * @brief 发件人邮编
 **/
  QString senderZipCode;

/**
 * @brief cod服务费
 **/
  qlonglong serviceFee;

/**
 * @brief 物流运输方式： 
MAIL-平邮 
EXPRESS-快递 
EMS-EMS 
OTHER-其他
 **/
  QString shippingType;

/**
 * @brief 仓库编码
 **/
  QString storeCode;

/**
 * @brief 发货物流公司编码，STO,YTO,EMS等
 **/
  QString tmsTpCode;

/**
 * @brief 订单总价
 **/
  qlonglong totalAmount;

/**
 * @brief 卖家ID
 **/
  qlonglong userId;

/**
 * @brief 卖家NICK
 **/
  QString userNick;

};

#endif  /* WLBORDER_H */
