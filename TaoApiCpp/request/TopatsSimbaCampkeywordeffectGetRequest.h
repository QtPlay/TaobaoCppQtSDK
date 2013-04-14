#ifndef TOPATSSIMBACAMPKEYWORDEFFECTGETREQUEST_H
#define TOPATSSIMBACAMPKEYWORDEFFECTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TopatsSimbaCampkeywordeffectGetResponse.h>

/**
 * TOP API: 推广计划下的词报表效果数据查询<br/> 
异步API使用方法，请查看：<a href="http://open.taobao.com/doc/detail.htm?id=30">异步API使用说明</a><br/>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TopatsSimbaCampkeywordeffectGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);

 QString getSearchType() const
;  void setSearchType (QString searchType);

 QString getSource() const
;  void setSource (QString source);

 QString getTimeSlot() const
;  void setTimeSlot (QString timeSlot);


  virtual TopatsSimbaCampkeywordeffectGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 查询的昵称
 **/
  QString nick;

/**
 * @brief 报表类型。可选值：SEARCH（搜索）、CAT（类目出价）、 NOSEARCH（定向投放），可多选，如：SEARCH,CAT
 **/
  QString searchType;

/**
 * @brief 数据来源。可选值：1（站内）、2（站外）、SUMMARY（汇总），其中SUMMARY必须单选，其它值可多选，如：1,2
 **/
  QString source;

/**
 * @brief 时间参数（昨天：DAY、 前一周：7DAY、 前15天：15DAY、 前30天：30DAY 、前90天：90DAY）单选
 **/
  QString timeSlot;

};

#endif  /* TOPATSSIMBACAMPKEYWORDEFFECTGETREQUEST_H */
