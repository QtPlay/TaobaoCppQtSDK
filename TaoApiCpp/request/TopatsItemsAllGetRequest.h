#ifndef TOPATSITEMSALLGETREQUEST_H
#define TOPATSITEMSALLGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsItemsAllGetResponse.h>

/**
 * TOP API: 提供异步获取三个月内的所有（出售中和仓库中）商品详情信息接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsItemsAllGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getEndTime() const
;  void setEndTime (QString endTime);

 QString getFields() const
;  void setFields (QString fields);

 QString getStartTime() const
;  void setStartTime (QString startTime);

 QString getStatus() const
;  void setStatus (QString status);


  virtual TopatsItemsAllGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品修改结束时间，格式yyyyMMdd，取值范围：前90天内~昨天，其中start_time<=end_time，如20120531相当于取商品修改时间到2012-05-31 23:59:59为止的商品。注：如果start_time和end_time相同，表示取一天的商品数据。<span style="color:red">强烈建议图书类卖家把三个月商品拆分成3次来获取，否则单个任务会消耗很长时间。<span>
 **/
  QString endTime;

/**
 * @brief Item结构体中的所有字段。<span style="color:red">请尽量按需获取，如果只取num_iid和modified字段，获取商品数据速度会超快。</span>
 **/
  QString fields;

/**
 * @brief 商品修改开始时间，格式yyyyMMdd，取值范围：前90天内~昨天。如：20120501相当于取商品修改时间从2012-05-01 00:00:00开始的订单。
 **/
  QString startTime;

/**
 * @brief 商品状态，可选值：onsale,instock。多个值用半角逗号分隔。默认查询两个状态的商品。
 **/
  QString status;

};

#endif  /* TOPATSITEMSALLGETREQUEST_H */
