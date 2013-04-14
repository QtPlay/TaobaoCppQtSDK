#ifndef SIMBAADGROUPSBYCAMPAIGNIDGETREQUEST_H
#define SIMBAADGROUPSBYCAMPAIGNIDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupsbycampaignidGetResponse.h>

/**
 * TOP API: 批量得到推广计划下的推广组
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupsbycampaignidGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual SimbaAdgroupsbycampaignidGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 页码，从1开始
 **/
  qlonglong pageNo;

/**
 * @brief 页尺寸，最大200，如果入参adgroup_ids有传入值，则page_size和page_no值不起作用。如果adgrpup_ids为空而campaign_id有值，此时page_size和page_no值才是返回的页数据大小和页码
 **/
  qlonglong pageSize;

};

#endif  /* SIMBAADGROUPSBYCAMPAIGNIDGETREQUEST_H */
