#ifndef TOPATSUSERACCOUNTREPORTGETREQUEST_H
#define TOPATSUSERACCOUNTREPORTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsUserAccountreportGetResponse.h>

/**
 * TOP API: 查询用户支付宝账务明细接口。<br/> 
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/> 
1. 使用之前必须首先申请支付宝API，参考http://open.taobao.com//doc/detail.htm?id=101181#s2<br/> 
2. 只对通过商家认证的、先行赔付卖家以及B2C商家开放<br/> 
3. 提交任务后，通过taobao.topats.result.get来查看任务执行状态，如果任务已完成，则返回下载URL<br/> 
4. 如果订阅了主动通知服务，任务完成后TOP会通过HTTP长连接推送消息，通知的消息格式请参考异步API使用文档<br/> 
5. 下载到的结果是CSV格式的文本文件，默认采用UTF-8编码<br/>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsUserAccountreportGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCharset() const
;  void setCharset (QString charset);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 QString getFields() const
;  void setFields (QString fields);

 QDateTime getStartTime() const
;  void setStartTime (QDateTime startTime);

 QString getType() const
;  void setType (QString type);


  virtual TopatsUserAccountreportGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 返回下载结果文件的数据格式，只支持utf-8和gbk编码，默认是utf-8
 **/
  QString charset;

/**
 * @brief 对账单结束时间。end_time - start_time <= 1个自然月
 **/
  QDateTime endTime;

/**
 * @brief 需要返回的字段列表。create_time:创建时间,type：账务类型,business_type:子业务类型,balance:当时支付宝账户余额,in_amount:收入金额,out_amount:支出金额,alipay_order_no:支付宝订单号,merchant_order_no:商户订单号,self_user_id:自己的支付宝ID,opt_user_id:对方的支付宝ID,memo:账号备注
 **/
  QString fields;

/**
 * @brief 对账单开始时间。最近一个月内的日期。
 **/
  QDateTime startTime;

/**
 * @brief 账务类型。多个类型是，用逗号分隔，不传则查询所有类型的。PAYMENT:在线支付，TRANSFER:转账，DEPOSIT:充值，WITHDRAW:提现，CHARGE:收费，PREAUTH:预授权，OTHER：其它。
 **/
  QString type;

};

#endif  /* TOPATSUSERACCOUNTREPORTGETREQUEST_H */
