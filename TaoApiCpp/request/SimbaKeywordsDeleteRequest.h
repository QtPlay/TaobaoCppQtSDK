#ifndef SIMBAKEYWORDSDELETEREQUEST_H
#define SIMBAKEYWORDSDELETEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordsDeleteResponse.h>

/**
 * TOP API: 删除一批关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsDeleteRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 qlonglong getKeywordIds() const
;  void setKeywordIds (qlonglong keywordIds);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaKeywordsDeleteResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划Id
 **/
  qlonglong campaignId;

/**
 * @brief 关键词Id数组，最多100个
 **/
  qlonglong keywordIds;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAKEYWORDSDELETEREQUEST_H */
