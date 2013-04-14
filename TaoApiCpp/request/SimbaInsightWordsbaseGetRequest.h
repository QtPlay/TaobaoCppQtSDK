#ifndef SIMBAINSIGHTWORDSBASEGETREQUEST_H
#define SIMBAINSIGHTWORDSBASEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaInsightWordsbaseGetResponse.h>

/**
 * TOP API: 词基础数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightWordsbaseGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFilter() const
;  void setFilter (QString filter);

 QString getNick() const
;  void setNick (QString nick);

 QString getTime() const
;  void setTime (QString time);

 QString getWords() const
;  void setWords (QString words);


  virtual SimbaInsightWordsbaseGetResponse *getResponseClass(const QString &session = "",
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
 * @brief 时间格式(DAY: 最近一天； WEEK：最近一周。MONTH：最近一个月。3MONTH：最近三个月)
 **/
  QString time;

/**
 * @brief 查询词组，最大长度170
 **/
  QString words;

};

#endif  /* SIMBAINSIGHTWORDSBASEGETREQUEST_H */
