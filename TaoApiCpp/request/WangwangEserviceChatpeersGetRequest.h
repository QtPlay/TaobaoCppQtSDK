#ifndef WANGWANGESERVICECHATPEERSGETREQUEST_H
#define WANGWANGESERVICECHATPEERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WangwangEserviceChatpeersGetResponse.h>

/**
 * TOP API: 获取聊天对象列表，只能获取最近1个月内的数据且查询时间段<=7天,只支持xml返回 。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceChatpeersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCharset() const
;  void setCharset (QString charset);

 QString getChatId() const
;  void setChatId (QString chatId);

 QString getEndDate() const
;  void setEndDate (QString endDate);

 QString getStartDate() const
;  void setStartDate (QString startDate);


  virtual WangwangEserviceChatpeersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 字符集
 **/
  QString charset;

/**
 * @brief 聊天用户ID：cntaobao+淘宝nick，例如cntaobaotest
 **/
  QString chatId;

/**
 * @brief 查询结束日期。如2010-03-24，与起始日期跨度不能超过7天
 **/
  QString endDate;

/**
 * @brief 查询起始日期。如2010-02-01，与当前日期间隔小于1个月。
 **/
  QString startDate;

};

#endif  /* WANGWANGESERVICECHATPEERSGETREQUEST_H */
