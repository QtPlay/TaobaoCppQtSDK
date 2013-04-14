#ifndef SIMBAADGROUPADGROUPCATMATCHSGETREQUEST_H
#define SIMBAADGROUPADGROUPCATMATCHSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupAdgroupcatmatchsGetResponse.h>

/**
 * TOP API: 根据一组推广组id获取推广组类目出价列表,
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupAdgroupcatmatchsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupIds() const
;  void setAdgroupIds (qlonglong adgroupIds);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaAdgroupAdgroupcatmatchsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组Id列表
 **/
  qlonglong adgroupIds;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAADGROUPADGROUPCATMATCHSGETREQUEST_H */
