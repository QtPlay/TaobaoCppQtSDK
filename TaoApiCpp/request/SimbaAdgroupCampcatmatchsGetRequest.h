#ifndef SIMBAADGROUPCAMPCATMATCHSGETREQUEST_H
#define SIMBAADGROUPCAMPCATMATCHSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupCampcatmatchsGetResponse.h>

/**
 * TOP API: 根据一个推广计划的id获取一页推广组类目出价列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupCampcatmatchsGetRequest : public TaoRequest
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


  virtual SimbaAdgroupCampcatmatchsGetResponse *getResponseClass(const QString &session = "",
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
 * @brief 页尺寸，最大200
 **/
  qlonglong pageSize;

};

#endif  /* SIMBAADGROUPCAMPCATMATCHSGETREQUEST_H */
