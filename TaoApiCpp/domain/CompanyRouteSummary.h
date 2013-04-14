#ifndef COMPANYROUTESUMMARY_H
#define COMPANYROUTESUMMARY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 公司的线路统计
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CompanyRouteSummary : public TaoDomain
{

public:
 virtual ~CompanyRouteSummary() { }

  QString getCompanyCode() const;
  void setCompanyCode (QString companyCode);
  QString getCompanyId() const;
  void setCompanyId (QString companyId);
  QString getCompanyName() const;
  void setCompanyName (QString companyName);
  qlonglong getRouteCounts() const;
  void setRouteCounts (qlonglong routeCounts);
  
  virtual void parseResponse();

private:
/**
 * @brief 物流公司code
 **/
  QString companyCode;

/**
 * @brief 物流公司id
 **/
  QString companyId;

/**
 * @brief 物流公司名
 **/
  QString companyName;

/**
 * @brief 公司的线路数目
 **/
  qlonglong routeCounts;

};

#endif  /* COMPANYROUTESUMMARY_H */
