#ifndef SIMBAADGROUPNONSEARCHSTATESUPDATEREQUEST_H
#define SIMBAADGROUPNONSEARCHSTATESUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupNonsearchstatesUpdateResponse.h>

/**
 * TOP API: 更改通投状态（暂停或启动）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupNonsearchstatesUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAdgroupidNonsearchstateJson() const
;  void setAdgroupidNonsearchstateJson (QString adgroupidNonsearchstateJson);

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaAdgroupNonsearchstatesUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组ID通投状态json数组字符串，数组个数最多200个。json数组中的key必须和对应实体ADGroup 中的属性字段保持一致，否则对应的实体对象属性获取不到相应的值推广组ID,通投状态不传默认为1
 **/
  QString adgroupidNonsearchstateJson;

/**
 * @brief 推广计划ID
 **/
  qlonglong campaignId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAADGROUPNONSEARCHSTATESUPDATEREQUEST_H */
