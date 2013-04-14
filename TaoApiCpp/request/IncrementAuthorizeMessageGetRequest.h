#ifndef INCREMENTAUTHORIZEMESSAGEGETREQUEST_H
#define INCREMENTAUTHORIZEMESSAGEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/IncrementAuthorizeMessageGetResponse.h>

/**
 * TOP API: 通用的用于获取用户授权的消息数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementAuthorizeMessageGetRequest : public TaoRequest
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

 QString getTopic() const
;  void setTopic (QString topic);


  virtual IncrementAuthorizeMessageGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 消息的结束时间，消息所对应的操作时间的最大值。和start_modified搭配使用能过滤消通知消息的时间段。不传时：如果设置了start_modified，默认为与start_modified同一天的23:59:59；否则默认为调用接口当天的23:59:59。（格式：yyyy-MM-dd HH:mm:ss） 
注意：start_modified和end_modified的日期必须在必须在同一天内，比如：start_modified设置2000-01-01 00:00:00，则end_modified必须设置为2000-01-01这个日期
 **/
  QDateTime endModified;

/**
 * @brief 消息所属的用户nick，他用型应用必传，自用型不传
 **/
  QString nick;

/**
 * @brief 页码，取值范围:大于零的整数; 默认值:1,即返回第一页数据。
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数，取值范围:大于零的整数;最大值:200;默认值:40
 **/
  qlonglong pageSize;

/**
 * @brief 消息的开始时间，消息所对应的操作时间的最小值和end_modified搭配使用能过滤消通知消息的时间段。不传时：如果设置了end_modified，默认为与 end_modified同一天的00:00:00，否则默认为调用接口当天的00:00:00。（格式：yyyy-MM-dd HH:mm:ss）最早可取6天内的数据。
注意：start_modified和end_modified的日期必须在必须在同一天内，比如：start_modified设置2000-01-01 00:00:00，则end_modified必须设置为2000-01-01这个日期
 **/
  QDateTime startModified;

/**
 * @brief 指定消息的状态，比如：ItemAdd，如果不填次参数，默认查询所有状态的数据，
 **/
  QString status;

/**
 * @brief 消息类型，比如：item
 **/
  QString topic;

};

#endif  /* INCREMENTAUTHORIZEMESSAGEGETREQUEST_H */
