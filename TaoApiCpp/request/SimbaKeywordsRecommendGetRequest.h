#ifndef SIMBAKEYWORDSRECOMMENDGETREQUEST_H
#define SIMBAKEYWORDSRECOMMENDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordsRecommendGetResponse.h>

/**
 * TOP API: 取得一个推广组的推荐关键词列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsRecommendGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 QString getNick() const
;  void setNick (QString nick);

 QString getOrderBy() const
;  void setOrderBy (QString orderBy);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getPertinence() const
;  void setPertinence (QString pertinence);

 qlonglong getSearch() const
;  void setSearch (qlonglong search);


  virtual SimbaKeywordsRecommendGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组ID
 **/
  qlonglong adgroupId;

/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 排序方式:  
搜索量 search_volume  
市场平均价格 average_price  
相关度 relevance  
不排序 non  
默认为 non
 **/
  QString orderBy;

/**
 * @brief 返回的第几页数据，默认为1
 **/
  qlonglong pageNo;

/**
 * @brief 返回的每页数据量大小,最大200
 **/
  qlonglong pageSize;

/**
 * @brief 相关度
 **/
  QString pertinence;

/**
 * @brief 搜索量,设置此值后返回的就是大于此搜索量的词列表
 **/
  qlonglong search;

};

#endif  /* SIMBAKEYWORDSRECOMMENDGETREQUEST_H */
