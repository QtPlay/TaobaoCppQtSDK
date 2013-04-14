#ifndef TOPATSREFUNDSRECEIVEGETREQUEST_H
#define TOPATSREFUNDSRECEIVEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsRefundsReceiveGetResponse.h>

/**
 * TOP API: 提供异步获取三个月内买家收到的退款详情信息接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsRefundsReceiveGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getEndTime() const
;  void setEndTime (QString endTime);

 QString getFields() const
;  void setFields (QString fields);

 QString getStartTime() const
;  void setStartTime (QString startTime);


  virtual TopatsRefundsReceiveGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 退款修改结束时间，格式yyyyMMdd，取值范围：前90天内~昨天，其中start_time<=end_time，如20120531相当于取退款修改时间到2012-05-31 23:59:59为止的退款。注：如果start_time和end_time相同，表示取一天的退款数据。<span style="color:red">强烈建议直充类卖家把三个月退款拆分成3次来获取，否则单个任务会消耗很长时间。<span>
 **/
  QString endTime;

/**
 * @brief Refund结构体中的所有字段。<span style="color:red">请尽量按需获取，如果只取refund_id和modified字段，获取退款数据速度会超快。</span>
 **/
  QString fields;

/**
 * @brief 退款修改开始时间，格式yyyyMMdd，取值范围：前90天内~昨天。如：20120501相当于取退款修改时间从2012-05-01 00:00:00开始的退款。
 **/
  QString startTime;

};

#endif  /* TOPATSREFUNDSRECEIVEGETREQUEST_H */
