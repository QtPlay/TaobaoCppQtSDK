#ifndef SIMBAINSIGHTCATSANALYSISGETRESPONSE_H
#define SIMBAINSIGHTCATSANALYSISGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/INCategoryAnalysis.h>


/**
 * @brief TOP RESPONSE API: 类目分析数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightCatsanalysisGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightCatsanalysisGetResponse() { }

  QList<INCategoryAnalysis> getInCategoryAnalyses() const;
  void setInCategoryAnalyses (QList<INCategoryAnalysis> inCategoryAnalyses);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词分析数据列表
 **/
  QList<INCategoryAnalysis> inCategoryAnalyses;

};

#endif
