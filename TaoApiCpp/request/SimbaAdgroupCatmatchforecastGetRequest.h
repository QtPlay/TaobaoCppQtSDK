#ifndef SIMBAADGROUPCATMATCHFORECASTGETREQUEST_H
#define SIMBAADGROUPCATMATCHFORECASTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupCatmatchforecastGetResponse.h>

/**
 * TOP API: 获取指定推广组下给定出价的类目出价预估信息;
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupCatmatchforecastGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 qlonglong getCatmatchPrice() const
;  void setCatmatchPrice (qlonglong catmatchPrice);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaAdgroupCatmatchforecastGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组ID
 **/
  qlonglong adgroupId;

/**
 * @brief 类目出价,出价范围在5-9999之间,单位分
 **/
  qlonglong catmatchPrice;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAADGROUPCATMATCHFORECASTGETREQUEST_H */
