#ifndef INCREMENTTRADESGETREQUEST_H
#define INCREMENTTRADESGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/IncrementTradesGetResponse.h>

/**
 * TOP API: 开通主动通知业务的APP可以通过该接口获取用户的交易和评价变更通知信息 
<font color="red">建议在获取增量消息的时间间隔是：半个小时</font>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementTradesGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndModified() const
;  void setEndModified (QDateTime endModified);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartModified() const
;  void setStartModified (QDateTime startModified);

 QString getStatus() const
;  void setStatus (QString status);

 QString getType() const
;  void setType (QString type);


  virtual IncrementTradesGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 消息所对应的操作时间的最大值。和start_modified搭配使用能过滤消通知消息的时间段。不传时：如果设置了start_modified，默认为与start_modified同一天的23:59:59；否则默认为调用接口当天的23:59:59。（格式：yyyy-MM-dd HH:mm:ss）<br>
<font color="red">注意：start_modified和end_modified的日期必须在必须在同一天内，比如：start_modified设置2000-01-01 00:00:00，则end_modified必须设置为2000-01-01这个日期</font>
 **/
  QDateTime endModified;

/**
 * @brief 消息所属于的用户的昵称。设置此参数，返回的消息会根据传入nick的进行过滤。自用型appKey的昵称默认为自己的绑定昵称，此参数无效。
 **/
  QString nick;

/**
 * @brief 页码。取值范围:大于零的整数; 默认值:1,即返回第一页数据。
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数。取值范围:大于零的整数;最大值:200;默认值:40。
 **/
  qlonglong pageSize;

/**
 * @brief 消息所对应的操作时间的最小值。和end_modified搭配使用能过滤消通知消息的时间段。不传时：如果设置了end_modified，默认为与end_modified同一天的00:00:00，否则默认为调用接口当天的00:00:00。（格式：yyyy-MM-dd HH:mm:ss）<br>
<font color="red">注意：start_modified和end_modified的日期必须在必须在同一天内，比如：start_modified设置2000-01-01 00:00:00，则end_modified必须设置为2000-01-01这个日期</font>
 **/
  QDateTime startModified;

/**
 * @brief 交易或评价的状态，默认查询所有状态的数据，除了默认值外每次只能查询一种状态。除了交易超时提醒消息没有type分类以外，交易的其他消息都有type分类。 
可选值  
TradeCreate（创建交易）  
TradeModifyFee（修改交易费用）  
TradeCloseAndModifyDetailOrder（关闭或修改子订单）  
TradeClose（关闭交易）  
TradeBuyerPay（买家付款）  
TradeSellerShip（卖家发货）  
TradeDelayConfirmPay（延长收货时间）  
TradePartlyRefund（子订单退款成功）  
TradePartlyConfirmPay（子订单打款成功）  
TradeSuccess（交易成功）  
TradeTimeoutRemind（交易超时提醒）  
TradeRated（交易评价变更）  
TradeMemoModified（交易备注修改）  
TradeLogisticsAddressChanged（修改交易收货地址）  
TradeChanged（修改订单信息（SKU等））
 **/
  QString status;

/**
 * @brief 交易所属的类型，默认查询所有类型的数据，除了默认值外每次只能查询一种类型。交易超时提醒类型的消息没有消息类型，固定返回“timeout”。 
可选值： 
ec（直冲）  
guarantee_trade（一口价、拍卖）  
auto_delivery（自动发货）  
cod（货到付款）  
independent_shop_trade（旺店标准版交易）  
independent_simple_trade（旺店入门版交易）  
shopex_trade（ShopEX版)  
netcn_trade（淘宝与万网合作版网）  
travel（旅游产品交易）  
fenxiao（分销平台交易）  
game_equipment（网游虚拟交易）
 **/
  QString type;

};

#endif  /* INCREMENTTRADESGETREQUEST_H */
