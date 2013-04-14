#ifndef SIMBAINSIGHTCATSANALYSISGETREQUEST_H
#define SIMBAINSIGHTCATSANALYSISGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightCatsanalysisGetResponse.h>

/**
 * TOP API: 类目分析数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsanalysisGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCategoryIds() const
;  void setCategoryIds (QString categoryIds);

 QString getNick() const
;  void setNick (QString nick);

 QString getStu() const
;  void setStu (QString stu);


  virtual SimbaInsightCatsanalysisGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询类目id数组，最大长度200
 **/
  QString categoryIds;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 结果过滤。 
AREA：返回地域占比； 
SOURCE：返回来源占比； 
HPRICE：返回竞价分布。 
stu只能是AREA、SOURCE或HPRICE中的一个
 **/
  QString stu;

};

#endif  /* SIMBAINSIGHTCATSANALYSISGETREQUEST_H */
