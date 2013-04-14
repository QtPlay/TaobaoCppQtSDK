#ifndef SIMBAINSIGHTWORDSCATSGETREQUEST_H
#define SIMBAINSIGHTWORDSCATSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightWordscatsGetResponse.h>

/**
 * TOP API: 词和类目查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightWordscatsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFilter() const
;  void setFilter (QString filter);

 QString getNick() const
;  void setNick (QString nick);

 QString getWordCategories() const
;  void setWordCategories (QString wordCategories);


  virtual SimbaInsightWordscatsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 结果过滤。PV：返回展现量；CLICK：返回点击量；AVGCPC：返回平均出价；COMPETITION ：返回竞争宝贝数;CTR 点击率。filter可由,组合
 **/
  QString filter;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 查询词和类目数组，最大长度200，每一个数组元素都是词+类目，以”^^”分割如下： 
词^^类目
 **/
  QString wordCategories;

};

#endif  /* SIMBAINSIGHTWORDSCATSGETREQUEST_H */
