#ifndef SIMBAINSIGHTWORDSANALYSISGETRESPONSE_H
#define SIMBAINSIGHTWORDSANALYSISGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/INWordAnalysis.h>


/**
 * @brief TOP RESPONSE API: 词分析数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaInsightWordsanalysisGetResponse : public TaoResponse
{
public:
 virtual ~SimbaInsightWordsanalysisGetResponse() { }

  QList<INWordAnalysis> getInWordAnalyses() const;
  void setInWordAnalyses (QList<INWordAnalysis> inWordAnalyses);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词分析列表
 **/
  QList<INWordAnalysis> inWordAnalyses;

};

#endif
