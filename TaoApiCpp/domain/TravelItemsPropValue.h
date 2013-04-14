#ifndef TRAVELITEMSPROPVALUE_H
#define TRAVELITEMSPROPVALUE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 旅游商品类目属性值结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TravelItemsPropValue : public TaoDomain
{

public:
 virtual ~TravelItemsPropValue() { }

  qlonglong getCid() const;
  void setCid (qlonglong cid);
  QString getName() const;
  void setName (QString name);
  qlonglong getPid() const;
  void setPid (qlonglong pid);
  QString getPropName() const;
  void setPropName (QString propName);
  qlonglong getSortOrder() const;
  void setSortOrder (qlonglong sortOrder);
  qlonglong getVid() const;
  void setVid (qlonglong vid);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品所属叶子类目ID，旅游度假8个叶子类目。
 **/
  qlonglong cid;

/**
 * @brief 属性值名称。
 **/
  QString name;

/**
 * @brief 属性ID。
 **/
  qlonglong pid;

/**
 * @brief 属性名称。
 **/
  QString propName;

/**
 * @brief 排列序号，表示同级类目的展现次序，如数值相等则按名称次序排列。取值范围:大于零的整数。
 **/
  qlonglong sortOrder;

/**
 * @brief 属性值ID。
 **/
  qlonglong vid;

};

#endif  /* TRAVELITEMSPROPVALUE_H */
