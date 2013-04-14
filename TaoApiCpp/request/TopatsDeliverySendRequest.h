#ifndef TOPATSDELIVERYSENDREQUEST_H
#define TOPATSDELIVERYSENDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsDeliverySendResponse.h>

/**
 * TOP API: 提供异步批量物流发货功能。<br/> 
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/> 
1. 一次最多发货40个订单<br/> 
2. 提交任务后，通过taobao.topats.result.get来查看任务执行状态，如果任务已完成，则返回结果<br/> 
3. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档<br/> 
4. 此任务的有效期为2天，超过2天后任务会被删除
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsDeliverySendRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCompanyCodes() const
;  void setCompanyCodes (QString companyCodes);

 QString getMemos() const
;  void setMemos (QString memos);

 QString getOrderTypes() const
;  void setOrderTypes (QString orderTypes);

 QString getOutSids() const
;  void setOutSids (QString outSids);

 QString getSellerAddress() const
;  void setSellerAddress (QString sellerAddress);

 qlonglong getSellerAreaId() const
;  void setSellerAreaId (qlonglong sellerAreaId);

 QString getSellerMobile() const
;  void setSellerMobile (QString sellerMobile);

 QString getSellerName() const
;  void setSellerName (QString sellerName);

 QString getSellerPhone() const
;  void setSellerPhone (QString sellerPhone);

 QString getSellerZip() const
;  void setSellerZip (QString sellerZip);

 QString getTids() const
;  void setTids (QString tids);


  virtual TopatsDeliverySendResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 每个tid所对应的物流公司代码。可以不传，表示所有的物流公司都为"其他"，但是只要有一个订单需要指定物流公司，所有的订单都需要指定物流公司,每个类型之间用";"连接。排列要和tid顺序一致，不需要指定物流公司的订单，该位置上放上一个空字符串""。可以不传，传了长度和位置要和tid保持一致。 
 
每个company_code表示物流公司代码.如"POST"就代表中国邮政,"ZJS"就代表宅急送.调用 taobao.logisticcompanies.get 获取。如传入的代码非淘宝官方物流合作公司，默认是“其他”物流的方式，在淘宝不显示物流具体进度，故传入需谨慎。如果orderType为delivery_needed，则必传
 **/
  QString companyCodes;

/**
 * @brief 每个tid所对应的卖家备注。可以不传，表示所有的发货订单都不需要卖家备注，但是只要有一个订单需要指定卖家备注，所有的订单都需要指定卖家备注,每个卖家备注之间用";"连接。排列要和tid顺序一致，不需要指定卖家备注的订单，该位置上放上一个空字符串""。可以不传，传了长度和位置要和tid保持一致。卖家备注.最大长度为250个字符。如果orderType为delivery_needed，则必传
 **/
  QString memos;

/**
 * @brief 每个tid所对应的物流发货类型。可以不传，表示所有的发货类型都为"delivery_needed"，但是只要有一个订单需要指定发货类型，所有的订单都需要指定发货类型,每个类型之间用";"连接。排列要和tid顺序一致，不需要指定发货类型的订单，该位置上放上一个空字符串""。可以不传，传了长度和位置要和tid保持一致。 每个类型可选( delivery_needed(物流订单发货),virtual_goods(虚拟物品发货). ) 注:选择virtual_goods类型进行发货的话下面的参数可以不需填写。如果选择delivery_needed 则下面的参数必须要填写
 **/
  QString orderTypes;

/**
 * @brief 每个tid所对应的物流公司运单号。可以不传，表示所有的物流订单都没有订单号，但是只要有一个订单需要有订单号，所有的订单都需要指定订单号,每个订单号之间用";"连接。排列要和tid顺序一致，不需要指定订单号的订单，该位置上放上一个空字符串""。可以不传，传了长度和位置要和tid保持一致。 
具体一个物流公司的真实运单号码。淘宝官方物流会校验，请谨慎传入；若company_codes中传入的代码非淘宝官方物流合作公司，此处运单号不校验。如果orderType为delivery_needed，则必传
 **/
  QString outSids;

/**
 * @brief 卖家地址(详细地址).如:XXX街道XXX门牌,省市区不需要提供。如果orderType为delivery_needed，则必传
 **/
  QString sellerAddress;

/**
 * @brief 卖家所在地国家公布的标准地区码.参考:http://www.stats.gov.cn/tjbz/xzqhdm/t20080215_402462675.htm 或者调用 taobao.areas.get 获取。如果orderType为delivery_needed，则必传
 **/
  qlonglong sellerAreaId;

/**
 * @brief 卖家手机号码
 **/
  QString sellerMobile;

/**
 * @brief 卖家姓名。如果orderType为delivery_needed，则必传
 **/
  QString sellerName;

/**
 * @brief 卖家固定电话.包含区号,电话,分机号,中间用 " – "; 卖家固定电话和卖家手机号码,必须填写一个.
 **/
  QString sellerPhone;

/**
 * @brief 卖家邮编。如果orderType为delivery_needed，则必传
 **/
  QString sellerZip;

/**
 * @brief 批量发货的订单id列表，每个订单id必需是合法的数字类型的tid，每个tid之间以";"分隔，至少要指定一个tid，最多不超过40个tid
 **/
  QString tids;

};

#endif  /* TOPATSDELIVERYSENDREQUEST_H */
